#include <iostream>
#include "String.h"
using namespace HomeMadeString;
 String::String (const String& orig){
     if(orig.elementNum==0){
         this->elementNum=0;
         this->pData=NULL;
     }
     else{
         this->pData=new char[orig.elementNum+1];
         strcpy(this->pData,orig.pData);
         this->elementNum=orig.elementNum;
     }
 }
 
 String::String(char* str){
this->elementNum=strlen(str);
if(this->elementNum==0){
    this->pData=NULL;
}else{
this->pData=new char[ this->elementNum+1];
   for (int i=0;i<=elementNum;i++) 
   this->pData[i]=str[i];
   }

}
 

 String::String(char c, int times){
     this->elementNum=times+1;
     this->pData=new char[this->elementNum];
     for(int i=0;i<this->elementNum-1;i++){
         this->pData[i]=c;
     } this->pData[elementNum-1]='/0';

 }
 String::~String()
{
    delete[] this->pData;
}
void String::getStr(char* const pBuff) const
{
    for (int i=0;i<=elementNum;i++) 
    pBuff[i]=pData[i];
}
void String::print(std::ostream& os) const
{
 for(unsigned int i=0;i<elementNum;i++)
 
 os<<pData[i];
 }

 static void String::copy(String &string1, const String &string2){
    if(string2->elementNum==0){
        if(string1->elementNum!=0){
            delete[] string1->pData;
        }
        string1->elementNum=0;
    }
    else{
         if(string1->elementNum!=0){
            delete[] string1->pData;
        }
        string1->elementNum=string2->elementNum2;
        string1->pData=new char[string1->elementNum+1];
        strcpy(string1->pData,string2->p.data);
    }
 }
Static bool String::isEqual( const String& string1, const String& string2){
    if(string1->elementNum!=string2->elementNum){
        return false;
    } 
    if(string1->elementNum==0){
        return true;
    }
    return strcmp(string1->pData,string2->pData);
}
 
 char String::getChar(int pos) {
     if(pos> this->elementNum){
         throw std::out_of_range("there is no such position");
     }
 else   return this->pData[pos-1];
 }

  Static String String::concatenate(String string1, String string2){
 String res;
 res.elementNum=string1.elementNum+string2.elementNum-1;
for (int i=0;i<string1.elementNum-1;i++)
 res.pData[i]=string1.pData[i];
for (int i=string1.elementNum-1;i<res.elementNum;i++) 
res.pData[i]=string2.pData[i-string1.elementNum+1];
 return res;

}


