122. Best Time to Buy and Sell Stock II

Say you have an array for which the ith element is the price of a given stock on day i.

Design an algorithm to find the maximum profit. You may complete as many transactions as you like (ie, buy one and sell one share of the stock multiple times). 
However, you may not engage in multiple transactions at the same time (ie, you must sell the stock before you buy again).
 

// 我寫的時候一定是頭撞到不過我想應該是早就沒救啊哈哈
// Sol1的想法，可以重複很多次買賣，只要比買的價高就賣
// sol2的想法，沒股票又準備漲的時候就買進，有股票又準備跌就賣出

// sol1
int maxProfit(int* prices, int pricesSize) {
    int i=0;
    int profit = 0;
    //沒有股票當然沒獲利
    if (pricesSize==0){
        return 0;
    }
    else{//可重複買賣所以找到比較大的就可以買入賣出
        for (int i=0; i< pricesSize-1; i++){
            if(prices[i]<prices[i+1]){
                profit += prices[i+1] - prices[i];
            }
        }
        return profit;
    }
}

// sol2
int maxProfit(int* prices, int pricesSize) {
    int i = 0;
    int buy = 0;
    int profit = 0;
    bool stock = false;
    for (i=0; i<pricesSize-1; i++){
        if(!stock && prices[i]<prices[i+1] ){
            buy = prices[i];
            stock = true;
        }
        
        if(stock && prices[i]>prices[i+1]){
            profit += prices[i]-buy;
            stock = false;
        }
    }
    
    if(stock){
        profit +=prices[i]-buy;
    }
    return profit;
}