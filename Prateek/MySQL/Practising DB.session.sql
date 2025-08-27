-- CREATE TABLE Customers_Offline (
--     CustomerID INT PRIMARY KEY,
--     CustomerName VARCHAR(50),
--     City VARCHAR(50)
-- );

-- INSERT INTO Customers_Offline (CustomerID, CustomerName, City) VALUES
-- (3, 'Aman Verma', 'Bengaluru'),
-- (4, 'Kavita Joshi', 'Pune'),
-- (5, 'Sneha Gupta', 'Hyderabad'),
-- (6, 'Rohit Mehra', 'Chennai'),
-- (7, 'Meena Iyer', 'Kolkata');

SELECT CustomerName, City FROM Customers_Offline
EXCEPT
SELECT CustomerName, City FROM Customers_Online;


