--- chrome/browser/password_manager/chrome_password_manager_client.cc.orig	2024-02-25 20:22:18 UTC
+++ chrome/browser/password_manager/chrome_password_manager_client.cc
@@ -674,7 +674,7 @@ void ChromePasswordManagerClient::NotifyUserCredential
 }
 
 void ChromePasswordManagerClient::NotifyKeychainError() {
-#if BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   PasswordsClientUIDelegate* manage_passwords_ui_controller =
       PasswordsClientUIDelegateFromWebContents(web_contents());
   manage_passwords_ui_controller->OnKeychainError();
