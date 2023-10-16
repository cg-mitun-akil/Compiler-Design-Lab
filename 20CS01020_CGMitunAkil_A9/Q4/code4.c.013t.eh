
;; Function func (func, funcdef_no=119, decl_uid=3493, cgraph_uid=120, symbol_order=119)

int func (int n)
{
  int D.3501;

  if (n == 1) goto <D.3499>; else goto <D.3500>;
  <D.3499>:
  D.3501 = 1;
  // predicted unlikely by early return (on trees) predictor.
  goto <D.3504>;
  <D.3500>:
  if (n == 2) goto <D.3502>; else goto <D.3503>;
  <D.3502>:
  D.3501 = 2;
  // predicted unlikely by early return (on trees) predictor.
  goto <D.3504>;
  <D.3503>:
  _1 = n + -1;
  _2 = func (_1);
  _3 = n + -2;
  _4 = func (_3);
  D.3501 = _2 + _4;
  // predicted unlikely by early return (on trees) predictor.
  goto <D.3504>;
  <D.3504>:
  return D.3501;
}



;; Function main (main, funcdef_no=120, decl_uid=3495, cgraph_uid=121, symbol_order=120)

int main ()
{
  int a;
  int D.3505;

  a = 3;
  a = 17;
  a = 67;
  a = func (a);
  a = func (5);
  a = 3;
  printf ("%d", a);
  D.3505 = 0;
  goto <D.3506>;
  <D.3506>:
  return D.3505;
}


