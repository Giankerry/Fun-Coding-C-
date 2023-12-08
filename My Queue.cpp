#include <iostream>
#include <iomanip>
#include <queue>
#include <windows.h>

int total_orders=0,order_num=0;

class Order {
public:
  std::queue<int> order_number;
  std::queue<std::string> order_content;
  std::queue<float> order_price;
  std::queue<std::string> status;
};

struct product_avail {
  std::string products[6] = {"McFloat \t", "Yumburger\t", "Jolly Hotdog", "McChicken\t", "Jolly Spaghetti", "McWater\t"};
  float prices[6] = {75.99f, 50.00f, 87.99f, 105.50f, 60.89f, 69.99f};
};

HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

void show_available() {
  product_avail product;
  std::cout << std::fixed << std::setprecision(2);
  std::cout << "Available Products : \n";
  for (int i = 0; i < 6; i++) {
    std::cout << "[ C" << i + 1 << "]" << product.products[i] << "\t" << product.prices[i] << std::endl;
  }
}

void order_process(Order &order, int choice,int order_num) {
  product_avail product;
  order.order_number.push(order_num);
  order.order_content.push(product.products[choice]);
  order.order_price.push(product.prices[choice]);
  order.status.push("Preparing...");
}

void placing_order(Order &order,product_avail &product) {
  char answer;
  do{
  product_avail product;
  int choice;
  show_available();
  std::cout << "Enter the number of your choice :: ";
  std::cin >> choice;
  if (choice > 0 || choice < 7) {
      order_num++;
      total_orders++;
  }
    else{
    std::cout << "Invalid choice. Please enter a number between 1 and 6." << std::endl;
    return;
  }
  order_process(order, choice - 1,order_num);
  std::cout << "Order successful! Your order number is " <<order_num<< std::endl;
  std::cout << "Item: " << product.products[choice-1] << std::endl;
  std::cout << "Price: " << product.prices[choice-1] << std::endl;
  std::cout << "Enter (y) for another order.";
  std::cin>>answer;
  system("cls");
}while(answer== 'y'||answer=='Y');
}

void check_ongoing(Order &order){
	char back,order_null;
  if(total_orders<1){
	std::cout<<"There are no orders as of the moment.\nPress any key to go back."<<std::endl;
  std::cin>>order_null;
  system("cls");
}
else{
  std::cout<<"Ongoing Order :: "<<std::endl;
  std::cout<<"Order Number : "<<order.order_number.front()<<std::endl;
	std::cout<<"Product Ordered : "<<order.order_content.front()<<std::endl;
	std::cout<<"Price : "<<order.order_price.front()<<std::endl;
	std::cout<<"Status : Now Serving..."<<std::endl;
  std::cout<<"\nRecent Order :: "<<std::endl;
  std::cout<<"Order Number : "<<order.order_number.back()<<std::endl;
	std::cout<<"Product Ordered : "<<order.order_content.back()<<std::endl;
	std::cout<<"Price : "<<order.order_price.back()<<std::endl;    
  std::cout<<"Press any key to return.";
  std::cin>>back;
  system("cls");
}
}

void claim_order(Order &order){
	char claim,restart,back,order_null;
  if(total_orders<1){
	std::cout<<"There are no orders as of the moment.\nPress any key to go back."<<std::endl;
  std::cin>>order_null;
  system("cls");
}
  else{
  do{
	std::cout<<"Serving Order...\nPress ('C') to claim your "<<order.order_content.front()<<" :: ";
  std::cin>>claim;
  std::cin.ignore();
  std::cout<<"\nThank you for coming! Enjoy your meal!"<<std::endl;
  std::cout<<"Press ('y') to claim another order."<<std::endl;
  total_orders--;
  order.order_content.pop();
	order.order_number.pop();
  order.order_price.pop();
  order.status.pop();
  std::cin>>restart;
  if (total_orders<1){std::cout<<"\nThere are no pending orders.\nEnter a key to go back.";
  std::cin>>back;
}
}while(restart=='y'&&total_orders>0);
}
}

void user_interface(Order &order,product_avail product){
	do{
  int option;
  system("cls");
  std::cout<<"===WELCOME TO MCDOLIBEE!==="<<std::endl;
  std::cout<<"(1) Place an order"<<std::endl;
  std::cout<<"(2) View ongoing orders"<<std::endl;
  std::cout<<"(3) Claim Order"<<std::endl;
  std::cout<<"(4) Exit Program\n"<<std::endl;
  std::cout<<"Enter Option :: ";
  std::cin>>option;
  system("cls");
  switch(option){
  case 1:
  placing_order(order,product);
  break;
  case 2:
  check_ongoing(order);
  break;
	case 3:
	claim_order(order);
  break;
  case 4:
	exit(EXIT_SUCCESS);
  break;
  }
}while(true);
}

int main() {
	SetConsoleTextAttribute(color,06);
  Order order;
  product_avail product;
  user_interface(order,product);
  return 0;
}
