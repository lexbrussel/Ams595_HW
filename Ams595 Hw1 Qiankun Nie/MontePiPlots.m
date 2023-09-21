% User input
n = input('the total number of points to be used in the Monte-Carlo approximation n:');


% Count the execution time
tic

% From MontePi
in_circle = 0;
for i = 1:n

    % Generate (x,y) in [0,1] × [0,1]  
    rand_vector_x = rand(1, n);
    rand_vector_y = rand(1, n);

    % Count number inside circle

    if(sqrt((rand_vector_x(i))^2 + (rand_vector_y(i))^2) <= 1)

        in_circle = in_circle + 1;
    end


end
my_pi = in_circle * 4 / n;
toc
exe_time = toc;

% Compute the absolute error
error_pi = abs(pi - my_pi);

% Plot all the points

figure;

% Give different color
for i = 1:n
    if sqrt((rand_vector_x(i))^2 + (rand_vector_y(i))^2) <= 1
        color = 'b'; 
    else
        color = 'r'; 
    end
    
    scatter(rand_vector_x(i), rand_vector_y(i), n, color, 'o');
    hold on; 
end

% Figure axis limit
xlim([0, 1]);
ylim([0, 1]); 

% Display the result
fprintf('The  execution time is: %f\n', exe_time);
fprintf('The absolute error is: %f\n', error_pi);
