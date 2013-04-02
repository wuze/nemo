// test.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<boost/algorithm/string.hpp>
#include<boost/regex.hpp>
#include<iostream>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{

	boost::regex  t("\\d+");
	boost::cmatch mm;
	const char *p="123abc.html";

	if( boost::regex_match(p,mm,t) )
	{
		for(int i=0;i<(int)mm.size();i++)
		{
			cout<<"match:"<<mm[i].str()<<endl;
		}
	}


	cout<<"---------------------------"<<endl;



    //( 1 )   ((  3  )  2 )((  5 )4)(    6    )   
    //(\w+)://((\w+\.)*\w+)((/\w*)*)(/\w+\.\w+)?
    //^协议://网址(x.x...x)/路径(n个\字串)/网页文件(xxx.xxx)
    const char *szReg = "(\\w+)://((\\w+\\.)*\\w+)((/\\w*)*)(/\\w+\\.\\w+)?";
    const char *szStr = "http://www.cppprog.com/2009/0112/48.html";
 
    {    
		cout<<"字符串匹配"<<endl;
		
        boost::regex reg( szReg );
        bool r=boost::regex_match( szStr , reg);
        assert(r);
    }
 
    {    
		cout<<"提取子串"<<endl;
        boost::cmatch mat;
        boost::regex reg( szReg );
        bool r=boost::regex_match( szStr, mat, reg);

        if(r) //如果匹配成功
        {
			for(int i=0;i<(int)mat.size();i++)
			{
				cout<<mat[i].str()<<endl;

			}

			cout<<"------------------"<<endl;
			
            //显示所有子串
            for(boost::cmatch::iterator itr=mat.begin(); itr!=mat.end(); ++itr)
            {
                //       指向子串对应首位置        指向子串对应尾位置          子串内容
                cout << itr->first-szStr << ' ' << itr->second-szStr << ' ' << *itr << endl;
            }
        }
        //也可直接取指定位置信息
        if(mat[4].matched) cout << "Path is" << mat[4] << endl;
		cout << "----------------------"<<endl;
    }
 
    { 
		cout<<"查找"<<endl;
        boost::cmatch mat;
        boost::regex reg( "\\d+" );    //查找字符串里的数字
        if(boost::regex_search(szStr, mat, reg))
        {
            cout << "searched:" << mat[0] << endl;
        }
    }
 
    { 
		cout<<"替换"<<endl;
        boost::regex reg( szReg );
        string s = boost::regex_replace( string(szStr), reg, "ftp://$2$5");
        cout << "ftp site:"<< s << endl;
    }


    { 
		cout<<"替换2，把<>&转换成网页字符"<<endl;
        string s1 = "(<)|(>)|(&)";
        string s2 = "(?1&lt;)(?2&gt;)(?3&amp;)";
        boost::regex reg( s1 );
        string s = boost::regex_replace( string("cout << a&b << endl;"), reg, s2, boost::match_default | boost::format_all);
        cout << "HTML:"<< s << endl;
    }
 
    { 
		cout<<"使用迭代器找出所有数字"<<endl;
        boost::regex reg( "\\d+" );    //查找字符串里的数字
        boost::cregex_iterator itrBegin = make_regex_iterator(szStr,reg); //(szStr, szStr+strlen(szStr), reg);
        boost::cregex_iterator itrEnd;
        for(boost::cregex_iterator itr=itrBegin; itr!=itrEnd; ++itr)
        {
                //       指向子串对应首位置        指向子串对应尾位置          子串内容
                cout << (*itr)[0].first-szStr << ' ' << (*itr)[0].second-szStr << ' ' << *itr << endl;
        }
    }
 
    { 
		
		cout<<"使用迭代器拆分字符串"<<endl;
        boost::regex reg("/");  //按/符拆分字符串
        boost::cregex_token_iterator itrBegin = make_regex_token_iterator(szStr,reg,-1); //使用-1参数时拆分，使用其它数字时表示取第几个子串，可使用数组取多个串
        boost::cregex_token_iterator itrEnd;
        for(boost::cregex_token_iterator itr=itrBegin; itr!=itrEnd; ++itr)
        {
            cout << *itr << endl;
        }
    }
 
    { 
		cout<<"使用迭代器拆分字符串2"<<endl;
        boost::regex reg("(.)/(.)");  //取/的前一字符和后一字符（这个字符串形象貌似有点邪恶-_-）
        int subs[] = {1,2};        // 第一子串和第二子串
        boost::cregex_token_iterator itrBegin = make_regex_token_iterator(szStr,reg,subs); //使用-1参数时拆分，使用其它数字时表示取第几个子串，可使用数组取多个串
        boost::cregex_token_iterator itrEnd;
        for(boost::cregex_token_iterator itr=itrBegin; itr!=itrEnd; ++itr)
        {
            cout << *itr << endl;
        }
    }
 
 
    cin.get();
	system("pause");
	return 0;
}

