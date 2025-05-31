//#include "que.h"
//#include<iostream>
//using namespace std;
//template<class itemtype>
//que::que() {
//	count = 0;
//	front = 0;
//	rear = 0;
//}
//template<class itemtype>
//int que::isempty() {
//	return(count == 0);
//}
//template<class itemtype>
//int que::isfull()
//{
//	return(count == maxque);
//
//}
//template<class itemtype>
//void que::insertfront(itemtype newitem)
//{
//	if (isfull())
//	{
//		cout << "over flow";
//	}
//	else
//	{
//		
//		 if (rear == maxque)
//		{
//			
//			items[front] = newitem;
//			front = 0;
//			
//			
//
//
//		}
//		 else 
//		 {
//			 items[front] = newitem;
//			 front = front + 1;
//
//
//		 }
//		
//		
//	}
//}
//template<class itemtype>
//void que::removefront(itemtype& item)
//{
//	if(isempty())
//	{
//		cout << "underflow";
//	}
//	else if(front==0)
//	{
//		item = items[front];
//		front = maxque;
//		
//	}
//	else 
//	{
//		front = items[front];
//		front = front-1;
//	}
//}
//template<class itemtype>
//void que::insertrear(itemtype newitem)
//{
//	if (isfull())
//	{
//		cout << "over flow";
//	}
//	else
//	{
//		if (rear == 0)
//		{
//			items[rear] = newitem;
//			rear = maxque;
//
//
//		}
//		else 
//		{
//		
//			items[rear] = newitem;
//
//			rear = rear - 1;
//
//
//		}
//
//
//	}
//}
//template<class itemtype>
//void que::removerear(itemtype& item)
//{
//	if (isempty())
//	{
//		cout << "underflow";
//	}
//	else if (rear== maxque)
//	{
//		item = items[front];
//		rear = 0;
//
//	}
//	else
//	{
//		item = items[rear];
//		rear = rear + 1;
//	}
//}