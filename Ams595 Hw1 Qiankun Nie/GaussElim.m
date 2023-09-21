function x = GaussElim(A, b)

% Check if A is square matrix
    [n, m] = size(A);
    if n ~= m
        error('Matrix A must be square.');
    end
    
% Check if the size of b matches A
    if length(b) ~= n
        error('Vector b must have the same size as the matrix A.');
    end
    
    % combine matrix
    comb_matrix = [A, b];

    % Gaussian elimination(Gengrate Upper triangle Matrix)
    for i = 1:n
        for j = i+1:n
            factor = comb_matrix(j, i) / comb_matrix(i, i);
            comb_matrix(j, i:end) = comb_matrix(j, i:end) - factor * comb_matrix(i, i:end);
        end
    end

    % Back substitution
    x = zeros(n, 1);

    % Write the solution vector into x
    for i = i:-1:1
        x(i) = (comb_matrix(i, end) - comb_matrix(i, i+1:n) * x(i+1:n)) / comb_matrix(i, i);
    end
end