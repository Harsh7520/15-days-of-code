def internationalans(num):
    singles = ["", "One ", "Two ", "Three ", "Four ", "Five ", "Six ", "Seven ", "Eight ", "Nine ", "Ten ", "Eleven ",
               "Twelve ",
               "Thirteen ",
               "Fourteen ",
               "Fifteen ",
               "Sixteen ",
               "Seventeen ",
               "Eighteen ",
               "Nineteen "]
    doubles = ["", "", "Twenty ",
               "Thirty ",
               "Forty ",
               "Fifty ",
               "Sixty ",
               "Seventy ",
               "Eighty ",
               "Ninety "]
    if(num<20):
        return (singles[num])
    elif(num<100):
        return doubles[num//10]+singles[int(num%10)]
    elif(num<1000):
        return singles[num//100]+"Hundred "+internationalans(int(num%100))
    elif(num<1000000):
        return internationalans(num//1000) +"Thousand "+internationalans(int(num%1000))
    elif(num<1000000000):
        return internationalans(num//1000000) + "Million "+internationalans(int(num%1000000))
    else:
        return internationalans(num // 1000000000) + "Billion " + internationalans(int(num % 1000000000))



num = int(input())
if(num==0):
    print("Zero")
else:
    print(internationalans(num))
