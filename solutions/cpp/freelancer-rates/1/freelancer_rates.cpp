// INFO: Headers from the standard library should be inserted at the top via
// #include <LIBRARY_NAME>
#include <cmath>
// This code is so ugly dont follow what i did here 
// daily_rate calculates the daily rate given an hourly rate
double daily_rate(double hourly_rate) {
    // Implement a function to calculate the daily rate given an hourly
    // rate
    double pay_per_day{};
    pay_per_day = hourly_rate * 8; 

    return pay_per_day;
}

// apply_discount calculates the price after a discount
double apply_discount(double before_discount, double discount) {
    // Implement a function to calculate the price after a discount.
    double discount_amount{};
    double after_discount{};

    discount_amount = before_discount * (discount / 100);
    after_discount = before_discount - discount_amount;
    
    return after_discount;
}

// monthly_rate calculates the monthly rate, given an hourly rate and a discount
// The returned monthly rate is rounded up to the nearest integer.
int monthly_rate(double hourly_rate, double discount) {
    // Implement a function to calculate the monthly rate, and apply a
    // discount.
    double pay_per_month{};
    double discounted_pay{};
    int ceiling_int{};

    pay_per_month = daily_rate(hourly_rate) * 22;
    discounted_pay = apply_discount(pay_per_month, discount);
    ceiling_int = static_cast<int>(std::ceil(discounted_pay));

    return ceiling_int;
}

// days_in_budget calculates the number of workdays given a budget, hourly rate,
// and discount The returned number of days is rounded down (take the floor) to
// the next integer.
int days_in_budget(int budget, double hourly_rate, double discount) {
    // Implement a function that takes a budget, an hourly rate, and a
    // discount, and calculates how many complete days of work that covers.
    double daily_pay{};
    double discounted_pay{};
    int total_days{};
    int floor_int{};
    daily_pay = daily_rate(hourly_rate);
    discounted_pay = apply_discount(daily_pay, discount);
    
    total_days = budget / static_cast<int>(discounted_pay);

    floor_int = static_cast<int>(std::floor(total_days));
    return floor_int;
}
