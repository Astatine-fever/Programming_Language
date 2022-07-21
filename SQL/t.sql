 DECLARE @age INT;
SET @age = 60;

IF @age < 18
   PRINT 'underage';
ELSE
BEGIN
   IF @age < 50
      PRINT 'You are below 50';
   ELSE
      PRINT 'Senior';
END;