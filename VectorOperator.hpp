/*----------
  ver 240616
  ----------*/

#ifndef VectorOperator_hpp
#define VectorOperator_hpp

using namespace std;

namespace VectorOperator{

  template<typename Type>
  Type Add(Type a,Type b){
    return a+b;
  }

  template<typename Type>
  vector<Type> Add(vector<Type> vec1,vector<Type> vec2){
    vector<Type> AnsVec(min(vec1.size(),vec2.size()));
    for(int i=0;i<AnsVec.size();i++)
      AnsVec[i]=Add(vec1[i],vec2[i]);
    return AnsVec;
  }

  template<typename Type>
  vector<Type> Add(vector<Type> vec,double c){
    vector<Type> AnsVec;
    for( int i=0 ; i<vec.size() ; i++ )
      AnsVec.push_back(Add(vec[i],c));
    return AnsVec;
  }

  template<typename Type>
  vector<Type> Add(double c,vector<Type> vec){
    return Add(vec,c);
  }
  
  template<typename Type>
  vector<Type> Add(vector<Type> vec,Type c){
    vector<Type> AnsVec(vec.size());
    for(int i=0;i<vec.size();i++)
      AnsVec[i]=Add(vec[i],c);
    return AnsVec;
  }

  template<typename Type>
  vector<Type> Add(Type c,vector<Type> vec){
    vector<Type> AnsVec(vec.size());
    for(int i=0;i<vec.size();i++)
      AnsVec[i]=Add(vec[i],c);
    return AnsVec;
  }

  double Reciprocal(double a){
    return -a;
  }

  template<typename Type>
  vector<Type> Reciprocal(vector<Type> vec){
    vector<Type> AnsVec;
    for(int i=0;i<vec.size();i++)
      AnsVec.push_back(Reciprocal(vec[i]));
    return AnsVec;
  }

  template<typename Type1,typename Type2>
  auto Minus(Type1 a,Type2 b){
    return Add(a,Reciprocal(b));
  }

  double InnerProduct(double a,double b){
    return a*b;
  }

  template<typename Type>
  double InnerProduct(vector<Type> v1,vector<Type> v2){
    int n=min(v1.size(),v2.size());
    double ans=0;
    for( int i=0 ; i<n ; i++ )
      ans+=InnerProduct(v1[i],v2[i]);
    return ans;
  }

  double EachTimes(double a,double b){
    return a*b;
  }

  template<typename Type>
  vector<Type> EachTimes(vector<Type> vec,double c){
    vector<Type> AnsVec;
    for( int i=0 ; i<vec.size() ; i++ )
      AnsVec.push_back(EachTimes(vec[i],c));
    return AnsVec;
  }

  template<typename Type>
  vector<Type> EachTimes(double c,vector<Type> vec){
    return EachTimes(vec,c);
  }

  template<typename Type>
  vector<Type> Concatenate(vector<Type> vec1,vector<Type> vec2){
    auto AnsVec=vec1;
    AnsVec.insert(AnsVec.end(),vec2.begin(),vec2.end());
    return AnsVec;
  }

  template<typename Type>
  vector<Type> Repeat(vector<Type> vec,int n){
    vector<Type> AnsVec;
    for( int i=0 ; i<n ; i++ )
      AnsVec.insert(AnsVec.end(),vec.begin(),vec.end());
    return AnsVec;
  }
 
};

#endif //VectorOperator_hpp
