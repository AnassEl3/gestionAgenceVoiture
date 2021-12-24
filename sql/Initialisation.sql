USE master
DROP DATABASE gestionAgenceVoiture
CREATE DATABASE gestionAgenceVoiture
USE gestionAgenceVoiture

GO

CREATE TABLE Auth (
	id INT IDENTITY PRIMARY KEY,
	nomUtilisateur VARCHAR(15),
	hash VARCHAR(30),
	type INT CHECK(type IN (1,2))
)