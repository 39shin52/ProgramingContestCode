#include<bits/stdc++.h>
using namespace std;

int main() {
  int w, h, n;
  cin >> w >> h >> n;
  int maxx, maxy, minx, miny;
  int x[n], y[n], a[n];
  for (int i = 0; i < n; i++)cin >> x[i] >> y[i] >> a[i];

  maxx = w;
  maxy = h;
  minx = 0;
  miny = 0;

  for(int i = 0; i < n; i++) {
    if (a[i] == 1) minx = max(minx, x[i]);
    else if (a[i] == 2) maxx = min(maxx, x[i]);
    else if (a[i] == 3) miny = max(miny, y[i]);
    else if (a[i] == 4) maxy = min(maxy, y[i]);
  }
  
  int dx, dy;
  dx = max(0, maxx - minx);
  dy = max(0, maxy - miny);

  cout << dx * dy << endl;
}

