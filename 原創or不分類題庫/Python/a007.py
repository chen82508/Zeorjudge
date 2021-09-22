while True:
  try:
    def isPrime(x):
      for k in range(2,x,1):
        if x % k==0:
          return False
      return True     

    x = int(input())
    if isPrime(x):
      print('質數')
    else:
      print('非質數') 
  except:
    break