/*
* Author: Roberts
*/

#include<iostream>
#include<systemc>

using namespace std;

SC_MODULE(monitor){
sc_in<bool> m_a, m_b, m_c, m_d, m_e, m_f;

SC_CTOR(monitor){
	SC_METHOD(monita);
	sensitive<<m_c<<m_d<<m_e<<m_f;
	dont_initialize();
}

void monita(void){
cout<<"at "<<sc_time_stamp()<<" inputs are: "<<m_a<<" and "<<m_b<<" outputs are: "<<m_c<<" and "<<m_d<<" and "<<m_e<<" and "<<m_f<<endl;
}
};

