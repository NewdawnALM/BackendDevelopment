// http://blog.csdn.net/hbuxiaofei/article/details/36171447
// 一个标准的strcpy是怎样写的？


// 为了实现链式操作，将目的地址返回，加3分！
char *strcpy(char *strDest, const char *strSrc) {
	// 对源地址和目的地址加非0断言，加3分
	assert(strDest != NULL && (strSrc != NULL));
	char *address = strDest;
	while((*strDest++ = *strSrc++) != '\0') ;
	return address;
}

// 同理，可以实现一个对应的strlen函数：
int strlen(const char *str) {
	assert(str != NULL);
	int len = 0;
	while((*str++) != '\0')	  ++len;
	return len;
}

