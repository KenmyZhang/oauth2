#include <iostream>
#include "src/data/verify/verify.h"
#include <Tools/MyTools.h>
#include <Tools/Json/MyJson.h>
#include "src/data/doaction/doaction.h"
#include "src/data/login/login.h"

int main()
{
	std::tuple<bool, std::string> tup;
	CMyJson::JsonRoot json;


//	//��ȡ��֤��
// 	CVerify verify;
// 	tup = verify.OnGetVerify("346944475@qq.com", "cn", 2, 1);
// 	std::cout << std::get<0>(tup)<<std::endl << MyTools::GetGB2312( std::get<1>(tup));
// 	
// 	CMyJson::InitJson(MyTools::GetGB2312(std::get<1>(tup)), json);
// 	if (CMyJson::GetValue<bool>(json,"state"))
// 	{
// 		std::cout << "��ȡ�ɹ�";
// 	}

// 	//����û��Ƿ����
// 	CVerify verify;
// 	tup = verify.OnCheckUser("346944475@qq.com");
// 	std::cout << std::get<0>(tup)<<std::endl << MyTools::GetGB2312( std::get<1>(tup));
// 	
// 	CMyJson::InitJson(MyTools::GetGB2312(std::get<1>(tup)), json);
// 	if (CMyJson::GetValue<bool>(json,"state"))
// 	{
// 		std::cout << "��ȡ�ɹ�";
// 	}

//	//ע��
// 	CDoaction doaction;
// 	tup = doaction.OnDoaction("346944475@qq.com", "aaaaa", "422162", 1, "yueke");
// 	std::cout << std::get<0>(tup) << std::endl << MyTools::GetGB2312(std::get<1>(tup));
// 	//CMyJson::JsonRoot json;
// 	CMyJson::InitJson(MyTools::GetGB2312(std::get<1>(tup)), json);
// 	if (CMyJson::GetValue<bool>(json, "state"))
// 	{
// 		std::cout << "��ȡ�ɹ�";
// 	}

//	//�޸�����
// 	CDoaction doaction;
// 	tup = doaction.OnDoaction("346944475@qq.com", "bbbbb", "526089", 2, "yueke");
// 	std::cout << std::get<0>(tup) << std::endl << MyTools::GetGB2312(std::get<1>(tup));
// 	//CMyJson::JsonRoot json;
// 	CMyJson::InitJson(MyTools::GetGB2312(std::get<1>(tup)), json);
// 	if (CMyJson::GetValue<bool>(json, "state"))
// 	{
// 		std::cout << "��ȡ�ɹ�";
// 	}

// 	//��¼
// 	CLogin login;
// 	tup = login.OnLogin("346944475@qq.com", "bbbbb");
// 	std::cout << std::get<0>(tup) << std::endl << MyTools::GetGB2312(std::get<1>(tup));
// 	//CMyJson::JsonRoot json;
// 	CMyJson::InitJson(MyTools::GetGB2312(std::get<1>(tup)), json);
// 	if (CMyJson::GetValue<bool>(json, "state"))
// 	{
// 		std::cout << "��ȡ�ɹ�";
// 	}

//	//��֤token�ӿ� �ɹ�����username ������ʱ��
	CLogin login;
	tup = login.OnCheckToken("jvkBUbYcH0kg2Sp2McNKv1yuzGzeD44d");
	std::cout << std::get<0>(tup) << std::endl << MyTools::GetGB2312(std::get<1>(tup));
	//CMyJson::JsonRoot json;
	CMyJson::InitJson(MyTools::GetGB2312(std::get<1>(tup)), json);
	if (CMyJson::GetValue<bool>(json, "state"))
	{
		std::cout << "��ȡ�ɹ�";
	}

//	//ˢ��toke
// 	CLogin login;
// 	tup = login.OnRefreshToken("LuJpee3WyOqzoInP1M4qdE9O00HfXvjv");
// 	std::cout << std::get<0>(tup) << std::endl << MyTools::GetGB2312(std::get<1>(tup));
// 	//CMyJson::JsonRoot json;
// 	CMyJson::InitJson(MyTools::GetGB2312(std::get<1>(tup)), json);
// 	if (CMyJson::GetValue<bool>(json, "state"))
// 	{
// 		std::cout << "��ȡ�ɹ�";
// 	}
    return 0;
}