#include <iostream>
using namespace std;
static int num = 1 ;
class Item{
    private :
    int ID ;
    string ItemName ;
    int Quantity ;
    int thePrice ;
    public:
    Item(){
        cout<<"Item : "<<num <<endl;
        cout<<"Enter the ID : ";
        cin>>ID ;

        cout<<"Enter the Item Name : ";
        cin>>ItemName ;

        cout<<"Enter the Quantity : ";
        cin>>Quantity ;

        cout<<"Enter the the Price : ";
        cin>>thePrice ;

        num ++ ;
    }
    //Function responsible for printing data
    void print (Item ob[] , int size){
        cout<<"inventory "<<endl;
        for(int x = 0 ; x < size ; x++){
        cout<<"Item : "<<x + 1  <<endl;
        cout<<"ID : "<<ob[x].ID<<endl;
        cout<<"Item Name : "<<ob[x].ItemName<<endl;
        cout<<"Quantity : "<<ob[x].Quantity<<endl;
        cout<<"thePrice : "<<ob[x].thePrice<<endl;
        cout<<endl;
       }
    }
    //Search function through which you can search for any product
    void Search (Item ob[] , int size){
        cout<<"Search location "<<endl;
        int code ;
        do{
            cout<<"Enter the code of the item you want to search for : ";
            cin>>code ;
            if(code == 0)break ;
            bool Verification = false ;
            for(int x = 0 ; x < size ; x++){
                if(code == ob[x].ID){
                    cout<<"ID : "<<ob[x].ID<<endl;
                    cout<<"Item Name : "<<ob[x].ItemName<<endl;
                    cout<<"Quantity : "<<ob[x].Quantity<<endl;
                    cout<<"thePrice : "<<ob[x].thePrice<<endl;
                    Verification = true ;
                    cout<<endl;
                }
            }
            if(!Verification){
                cout<<"Item not found ";
            }
        }while(true);
    }
    //DataModification function through which you can modify the data of any product
    void DataModification(Item ob[] , int size){
        cout<<"Betrayed by the amendment "<<endl;
        int code ;
        do{
            cout<<"Enter the code of the item you want to modify : ";
            cin>>code;

            if(code == 0)break ;
            bool Verification = false ;
            for(int x = 0 ; x < size ; x++){
                if(code == ob[x].ID){
                    cout<<"Item Name : ";
                    cin>>ob[x].ItemName ;
                
                    cout<<"Quantity : ";
                    cin>>ob[x].Quantity ;

                    cout<<"thePrice : ";
                    cin>>ob[x].thePrice;
                    cout<<endl;
                    Verification = true ;
                }
            }
            if(!Verification){
                cout<<"Item not found "<<endl;
            }
            cout<<"Categories after modification "<<endl;
            for(int x = 0 ; x < size ; x++){
                cout<<"ID : "<<ob[x].ID<<endl;
                cout<<"Item Name : "<<ob[x].ItemName<<endl;
                cout<<"Quantity : "<<ob[x].Quantity<<endl;
                cout<<"thePrice : "<<ob[x].thePrice<<endl;
            }
        }while(true);
    }
    //Delete function that allows you to delete any product
    void Delete (Item ob[] , int& size){
        cout<<"Deletion location "<<endl;
        int code;
        do{
            if(size == 0){
                cout<<"No more items to delete ";
                break;
            }
            cout<<"Enter the code of the item you want to delete. : ";
            cin>>code;
            if(code == 0)break ;
            bool Verification = false ;
            int index = 0 ;
            
            for (int x = 0 ; x < size ; x++){
                if(code == ob[x].ID){
                    index = x ;
                    Verification = true ;
                    break ;
                }
            }
            if(Verification){
                for(int x = index ; x < size - 1 ; x++){
                ob[x]=ob[x + 1];
            }
             size -- ;
             
             cout<<"The item was deleted successfully"<<endl;
             cout<<"Categories after deletion "<<endl;
             for(int x = 0 ; x < size ; x++){
                cout<<"Item : "<<x + 1  <<endl;
                cout<<"ID : "<<ob[x].ID<<endl;
                cout<<"Item Name : "<<ob[x].ItemName<<endl;
                cout<<"Quantity : "<<ob[x].Quantity<<endl;
                cout<<"thePrice : "<<ob[x].thePrice<<endl; 
              }
            }
            else 
            cout<<"The code you wrote does not exist"<<endl;
        }while(true);
        
    }
    //TotalPrice function can be used to calculate the total price of any product.
    void TotalPrice(Item ob[] , int size){
        int code ;
        do{
            cout<<"Enter the item code for which you want to know the total price : ";
            cin>>code;

            if(code == 0)break ;
            bool Verification = false ;

            for(int x = 0 ; x < size ; x++){
                if(code == ob[x].ID){
                    cout<<"Total Price  :  "<<ob[x].Quantity * ob[x].thePrice<<endl;
                    Verification = true ;
                }
            }
            if(!Verification){
                cout<<"Sorry, the code you entered does not exist.";
            } 
        }while(true);
    }
    //The LessQuantityItems function can be used to find out the minimum quantity of a product.
    void LessQuantityItems(Item ob[] , int size){
        int num ;
        cout<<"Enter a number to know the items with the least quantity : ";
        cin>>num;

        for(int x = 0 ; x < size ; x++){
            if(ob[x].Quantity < num){
                cout<<"ID : "<<ob[x].ID<<endl;
                cout<<"Item Name : "<<ob[x].ItemName<<endl;
                cout<<"Quantity : "<<ob[x].Quantity<<endl;
                cout<<"thePrice : "<<ob[x].thePrice<<endl;
                cout<<endl;
            }
        }
    }
};
int main() {
    int size , num ;
    cout<<"Enter the number of items :  ";
    cin>>size ;
    cout<<endl;
    Item* ob1  = new Item [size] ;
do{
    if(size == 0){
        cout<<"Inventory is empty. Exiting ";
        break;
    }
    
    string num1 = "Print item data ";
    string num2 = "Search for a specific item ";
    string num3 = "Modify data for a specific item ";
    string num4 = "Delete category";
    string num5 = "Total price ";
    string num6 = "Knowing the quantity of items";
    string num7 = "View the full program ";

    cout<<"number 1 : "<<num1<<endl;
    cout<<"number 2 : "<<num2<<endl;
    cout<<"number 3 : "<<num3<<endl;
    cout<<"number 4 : "<<num4<<endl;
    cout<<"number 5 : "<<num5<<endl;
    cout<<"number 6 : "<<num6<<endl;
    cout<<"number 7 : "<<num7<<endl;

    cout<<"Enter a number to do what you want : ";
    cin>>num ;

    switch (num){
       case 1 :
       ob1[0].print(ob1 , size);
       break ;

       case 2 :
       ob1[0].Search(ob1 , size);
       break ;

       case 3 :
       ob1[0].DataModification(ob1 , size);
       break ;
       
       case 4 :
       ob1[0].Delete(ob1 , size);
       break ;

       case 5 :
       ob1[0].TotalPrice(ob1 , size);
       break ;

       case 6 :
       ob1[0].LessQuantityItems(ob1 , size);
       break ;

       case 7 :
       ob1[0].print(ob1 , size);
       cout<<endl;
       ob1[0].Search(ob1 , size);
       cout<<endl;
       ob1[0].DataModification(ob1 , size);
       cout<<endl;
       ob1[0].Delete(ob1 , size);
       cout<<endl;
       ob1[0].TotalPrice(ob1 , size);
       cout<<endl;
       ob1[0].LessQuantityItems(ob1 , size);
       default :
       cout<<"Sorry this option is not available ";
    }
}while(num != 0);
    delete [] ob1 ;    
  
    return 0;
}
