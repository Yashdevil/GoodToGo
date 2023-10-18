

#include "LoginForm.h"
#include "SignUpForm.h"

using namespace System;
using namespace System::Windows::Forms;

void main(array<String^>^ args) 
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	User^ user = nullptr;
	while (true) {
	GoodToGo::LoginForm loginForm;
		loginForm.ShowDialog();
		if (loginForm.switchToRegister) {
			//show the register form
			GoodToGo::SignUpForm SignupForm;
			SignupForm.ShowDialog();

			if (SignupForm.switchToLogin)
				continue;

			else {
				user = SignupForm.user;
				break;
			}
		}
		else {
			user = loginForm.user;
			break;
		}

	if (user != nullptr) {
		MessageBox::Show("Successfull Authentication of " + user->Full_Name,	
			"Program. cpp", MessageBoxButtons::OK);
	}
	else {
		MessageBox::Show("Authentication Canceled",
			"Program. cpp", MessageBoxButtons::OK);
	}
}