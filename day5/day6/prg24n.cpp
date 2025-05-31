#include <iostream>
class linearSearch
{
    private:
    int a[10],loc,i,flag,key;
    public:
    void getdata()
    {
        cout <<"enter elements of array"<<endl;
        for(i=0;i<10;i++)
        cin>>a[i];
        cout <<"enter the element to be searched"<<endl;
        cin>>key;
    }
    void search()
    {
        flag=0;
        for(i=0;i<10;i++)
        {
            if(a[i]==key)
            {
                loc=i;
                flag=1;
                break;
            }
        }
        if(flag==1)
        cout<<"found at position:"<<loc;
        else
        cout<<"not found in the array";
    }
};
int main()
{
    linearSearch obj;
    obj.getdata();
    obj.search();
    return 0;
}