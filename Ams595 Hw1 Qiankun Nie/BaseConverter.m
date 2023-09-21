% User input

n = input('Enter an input number base n (2 <= n <= 10): ');
base_n_number = input(['Enter a number in base-' num2str(n) ': '],"s");
m = input('Enter an output number base m (2 <= m <= 10): ');

% Check if n and m are within valid range

if n < 2 || n > 10 || m < 2 || m > 10
    disp('Error: n and m must be integers between 2 and 10.');

else
    
% Turn to base 10
    base_10_number = base2dec(base_n_number, n);
% Turn to base m
    base_m_number = dec2base(base_10_number, m);
        
    fprintf('Your number in base %d is: %s\n', m, base_m_number);

end
