

int buffer[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

 void infinite_loop(int a)
 {
        int i=0;
        while (true) {
          if (i >= 10) {
            if (a == 11) { 
              break;
            }
          }
         i++;
       }
 }
 
void foo() {
      int i=4;
      int j=1;
      while(1) {
        if (i==1) {
          j++;
        } else {
          break;
        }
      }
    }

void infinite_loop_fixed(int a)
      {
        int i=0;
        while (true) {
          if (i >= 10) {
            if (a == 11) { 
              break;
            } else {
              a++;
            }
          }
         i=i+1;
       }
     }

void foo_fixed() {
      int i=get();
      int j=1;
      while(1) {
        if (i==1) {
          i++;
        } else {
          break;
        }
      }
    }



int main()
{
//infinite_loop(1);
infinite_loop1(1);
return 0;
}
