function x = MontePi(n)

in_circle = 0;

for i = 1:n

    % Generate (x,y) in [0,1] × [0,1]  
    rand_x = rand;
    rand_y = rand;

    % Count number inside circle

    if(sqrt((rand_x)^2 + (rand_y)^2) <= 1)

        in_circle = in_circle + 1;

    end

end

my_pi = in_circle * 4 / n;

abs_error = abs(pi - my_pi);

rel_error = abs_error / pi;

x = [my_pi, abs_error, rel_error];

end