#include<iostream>
using namespace std;

class s_list{
    int code[100];
    float price[100];
    int count,temp,temp1;
    float cal;
    public:
        s_list() {
        count = 0;
    }
        void add_list();
        void delete_list();
        void cost();
        void display();

};

void s_list::add_list(){
    int i;
    cout<<"Enter the product code: ";
    cin>>code[count];
    for(i=0;i<count;i++){
        if(code[i]==code[count]){
            cout<<"\nThe code already exists!\n";
            break;
        }
    }
    if(i==count){
    cout<<"Enter the price: ";
    cin>>price[count];
    count++;
    }
}

void s_list::delete_list() {
    if(count!=0){
    cout << "Enter the product code you want to delete: ";
    cin >> temp;

    int i;
    for (i = 0; i < count; i++) {
        if (temp == code[i]) {
            for (int j = i; j < count - 1; j++) {
                code[j] = code[j + 1];
                price[j] = price[j + 1];
            }
            code[count - 1] = 0;
            price[count - 1] = 0;
            count--;
            cout << "Product with code " << temp << " deleted successfully." << endl;
            break;
        }
    }
    }else{
        cout<<"No items to delete";
    }
}

void s_list::cost(){
    
    for(int i=0;i<count;i++){
        cal=cal+price[i];
    }
    cout<<"Your cost is: "<<cal<<endl;
    
}

void s_list::display(){
    if(count!=0){
    for(int i=0;i<count;i++){
        cout<<code[i]<<"\t"<<price[i]<<endl;
    }
    }else{
        cout<<"List is empty!\n";
    }
}

main(){
    s_list order;
    int x=1,s;
   do{
    cout<<"*********************MENU******************************************\n";
    cout<<"1. Add item\n2.Delete item\n3.Total cost\n4. Display\n5. Exit\n";
    cout<<"What do you want to do: ";
    cin>>s;
    switch(s){
        case 1:
            order.add_list();
            break;
        case 2:
            order.delete_list();
            break;
        case 3:
            order.cost();
            break;
        case 4:
            order.display();
            break;
        case 5:
            x=0;
    }
   }while(x==1);
}
