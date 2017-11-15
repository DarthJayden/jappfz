/*Задача: создать команды регистрации и логина. Записывать созданные аккаунты... куда-нибудь*/

void AC_Cmd_Register(gentity_t *ent)
{

}

void AC_InitCommands(void)
{
	//Util::Commands::addCommand("ac_test", AC_Cmd_Test);
	Util::Commands::addCommand("ac_register", AC_Cmd_Register);
	/*Util::Commands::addCommand("ac_removeAccount", AC_Cmd_RemoveAccount);
	Util::Commands::addCommand("ac_setf", AC_Cmd_SetField);
	Util::Commands::addCommand("ac_addf", AC_Cmd_AddField);
	Util::Commands::addCommand("ac_find", AC_Cmd_FindAccount);
	Util::Commands::addCommand("ac_list", AC_Cmd_ListAccounts);
	Util::Commands::addCommand("ac_info", AC_Cmd_AccountDetails);
	Util::Commands::addCommand("ac_reloadAccounts", AC_Cmd_ReloadAccounts);
	Util::Commands::addCommand("ac_adminLogin", AC_Cmd_AdminLogin);
	Util::Commands::addCommand("ac_adminLogout", AC_Cmd_AdminLogout);*/

	Util::Commands::addCommand("ac_login", AC_Cmd_Login);
	Util::Commands::addCommand("ac_logout", AC_Cmd_Logout);

	return;
}