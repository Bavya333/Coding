#include<iostream>
#include<cstring>
#include<list>
#include<iterator>
using namespace std;
list <string> :: iterator it;
list <string> :: iterator itm;
list <string> l[26];
list <string> m[26];
void insert(char x[],char a[])
{
	int as,hx;
	as=int(x[0]);
	hx=as-65;
	l[hx].push_front(x);
	m[hx].push_front(a);
}
int main()
{
	int n,hx,i;
	char search[10];
	int c,as;
	char x[10],a[50];
	cout<<"\n1.Add\n2.Search\n3.Delete\n4.Display\n0.Exit\nChoice:";
	cin>>c;
	insert("Apple","a fruit");
	insert("Arms","extended portion of upper limb");
	insert("Bat","A mammal");
	insert("Ball","A toy");
	insert("Chocolate","Candy");
	insert("Coffee","Beverage");
	insert("Dog","An animal");
	insert("Dongle","Wifi Adapter");
	insert("Elephant","An animal");
	insert("Eat","Verb");
	insert("Fan","An electrical device");
	insert("Fit","Suit");
	insert("Gas","State of matter");
	insert("Gain","Profit");
	insert("Hat","Cap");
	insert("Heaven","Distant sky");
	insert("Ink","Pigment");
	insert("Impulse","A thrust or push");
	insert("Jaggery","Sugarcane extract");
	insert("Jackfruit","A fruit");
	insert("Kitten","A young cat");
	insert("Kite","A lightweight toy");
	insert("Light","A source of illumination");
	insert("Lunch","A meal eaten in midday");
	insert("Math","A subject");
	insert("Music","A pleasant sound");
	insert("Nose","An organ");
	insert("Night","The period between Sunset and Sunrise");
	insert("Owl","A bird");
	insert("Oats","A diet meal");
	insert("Parrot","A bird");
	insert("Pink","A colour");
	insert("Queue","Line");
	insert("Question","A query");
	insert("Race","Running competition");
	insert("Right","Correct");
	insert("Site","Place");
	insert("Singer","One who sings songs");
	insert("Time","A quantity of availability of duration");
	insert("Taste","A sensation produced by tongue");
	insert("Umbrella","Cloth covered frame to protect from rain or sun");
	insert("Unveil","Uncover");
	insert("Van","A vehicle");
	insert("Vein","A blood vessel");
	insert("Whistle","An act of whistling");
	insert("Wing","An appendage of animal's body that enables it to fly");
	insert("X-Mas","A festival");
	insert("X-ray","A kind of radiation");
	insert("Yawn","To present a wide opening");
	insert("Yank","A sudden or vigorous pull");
	insert("Zebra","An animal");
	insert("Zabism","The worship of the Sun,The Moon and the stars");
	while(c)
	{
		switch(c)
		{
			case 1:
				cout<<"\nWord to be added:";
				cin>>x;
				cout<<"Meaning:";
				cin>>a;
				insert(x,a);
				break;
			case 2:
				cout<<"\nEnter the word to be searched:";
				cin>>search;
				hx=int(search[0])-65;
				for(i=1,it=l[hx].begin();it!=l[hx].end();it++,i++)
				{	
					if(*it==search)
					{
						itm=m[hx].begin();
						for(int j=1;j<i;j++,itm++);
						cout<<"\nWord:"<<*it<<"\nMeaning:"<<*itm<<"\n";
						break;
					}
					else
						cout<<"\nThe word "<<search<<" is not found";
				}
				break;
			case 3:
				cout<<"\nWord to be deleted:";
				cin>>search;
				hx=int(search[0])-65;
				for(i=1,it=l[hx].begin();it!=l[hx].end();it++,i++)
				{
					if(*it==search)
					{
						itm=m[hx].begin();
						for(int j=1;j<i;j++,itm++);
						l[hx].erase(it);
						m[hx].erase(itm);
						break;
					}
				}
				break;
			case 4:
				for(i=0;i<n;i++)
				{
					for(it=l[i].begin(),itm=m[i].begin();it!=l[i].end(),itm!=m[i].end();it++,itm++)
					{
						cout<<"\nWord:"<<*it<<"\nMeaning:"<<*itm<<"\n";
					}
					cout<<"\n";
				}
				break;
			default:
				cout<<"\nInvalid choice";
		}
		cout<<"\nChoice:";
		cin>>c;
	}
	return 0;
}
