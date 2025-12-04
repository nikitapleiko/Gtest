#pragma once
#include "pch.h"
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;


string CreatePassword(string ABC) {
	string password = ABC;
	return password;
}

string ChangePassword(string cekpassword, string password, string newpassword) {
	if (cekpassword == password) {
		return newpassword;
	}
	//cout << "password not exist\n";
	return password;
}

bool CekPassword(string cekpassword, string password) {
	if (cekpassword == password) {
		return true;
	}
	return false;
}