#include <iostream>
#include <string>

using namespace std;

class coldHearted
{
	public:

		int love(string you){

			if(you == "always alone."){
				// a tragic story... as usual
				string alone_asAlways = "\"Can we just be friends?\"";
				cout << "It was sunset that time, a girl and a boy were alone in a classroom..." << endl;
				cout << "I can still hear clearly her voice as she said it..." << endl << endl;
				cout << alone_asAlways << endl;

				string omega_3;
				cin >> omega_3;
			}
		}
};

int main()
{
	typedef string brokenhearted;
	coldHearted i;

	brokenhearted you = "always alone.";

	while(true){
		i.love(you);
	}

	return 0;
}
