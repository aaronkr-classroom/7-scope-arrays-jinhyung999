//encrypt.h
int shift;

void encrypt(char* msg) {
	char ch;
	int i = 0;

	while (msg[i] != '\0'){
		ch = msg[i];
		//소문자 암호화
		if (ch >= 'a' && ch <= 'z') {
			ch = (ch - 'a' + shift) % 26 + 'a';
		}
		//대문자 암호화
		else if (ch >= 'A' && ch <= 'Z') {
			ch = (ch - 'A' + shift) % 26 + 'A';
		}

		msg[i] = ch;//msg변수를 업데이트 하기
		i++;
	}
	//return msg;
}