#include "LoginForm.h"
#include "DasboardForm.h"
#include "SignUpForm.h"

using namespace System;
using namespace System::Windows::Forms;

int main(array<String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    User^ user = nullptr;

    // Create the login form
    GoodToGo::LoginForm loginForm;

    while (true) {
        loginForm.ShowDialog();

        if (loginForm.switchToSignUp) {
            // Show the register form
            GoodToGo::SignUpForm signupForm;
            signupForm.ShowDialog();

            if (signupForm.switchToLogin) {
                continue;
            }
            else {
                user = signupForm.user;
                break;
            }
        }
        else {
            user = loginForm.user;
            break;
        }
    }

    if (user != nullptr) {
        // Now, outside of the loop, create and run the dashboard form
        GoodToGo::DasboardForm dashboardForm(user);
        Application::Run(% dashboardForm);
    }
    else {
    }

    return 0;
}
