/********************************************************************
    ����ʱ��:     2017/09/27  14:40:24 
    �ļ���:       doaction.h
    ����:         лС��
    emal:        346944475@qq.com
    
    ����:        1.����oauth2Register ��client 
				2.�û�ע�ᣬ�޸�����ӿ�
                
    ˵��:        1. 
                2. 
*********************************************************************/
#include <tuple>
#include <string>

#ifndef DOACTION_H_
#define DOACTION_H_

class CDoaction {
public:
	/*
		ע������޸�����:
		����:
			username:Ҫ�������û���
			password:����
			verify:��֤��
			flag:1:ע�ᣬ2:�޸�����
			bundle_id:ע��Ĳ�Ʒid�����߽�������(���û��Զ���)
	*/
	std::tuple<bool, std::string> OnDoaction(std::string username,std::string password,std::string verify,int flag,std::string bundle_id);
};



#endif // !DOACTION_H_
