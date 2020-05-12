bool isPalindrome(int x){
    if(x<0)
    return false;

    long y=0;
    int temp=x;
    while(temp!=0){
        y=y*10+temp%10;
        temp/=10;

    }
    if(y==x)
    {
        return true;
    }
    return false;
}
