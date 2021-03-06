using namespace std;


/* class Value
*  Used to define variable values during design process.
*
*  - defines accaptable range of values with min and/or max properties.
*  - stores the current value.
*  - defines definition level, 0 is locked, while larger values are 
*    less definite, to allow for priority of adjustments when 
*    automated decisions are made.
*  - keeps tolerance of value property to be used for comparisons
*  
*/
class Value{
	public:
		//Constructors
		Value();						//New, zeroed value
		Value(double currentValue);		//Defined as just a number
		Value(double min, double max);	//Defined by limits
		Value(double current, double min, double max);	//Defined as current value and limits
		Value(double current, double min, double max, int deflevel);	//Defined as current, range, with level		

		//Functions that set information
		bool setMin(double);
		minOn();
		minOff();
		bool setMax(double);
		maxOn();
		maxOff();
		setTolerance(double);
		lock() {defLevel = 0;};									//Lock Value
		unlock() {defLevel = 1;};								//Unlock Value
		unlock(unsigned int newLevel) {defLevel = newLevel;}	//Unlock Value to a definition level
		
		//Functions that get information
		double getMin();
		double getMax();
		bool isMinOn();
		bool isMaxOn();
		double getTolerance();
		unsigned int getDefLevel();
		
		//Overloaded Operators
		Value& operator= (Value);								//Define Assignment	
		bool operator== (const Value);							//Define == comparison operator
		bool operator!= (Value& );								//Define != comparison operator
		const Value operator *(const Value& otherValue) const;	//Define Multiplication of Values
		const Value operator /(const Value& otherValue) const;	//Define Division of Values
		const Value operator +(const Value& otherValue) const;	//Define Addisition of Values
		const Value operator -(const Value& otherValue) const;	//Define Subtraction of Values
		//Can we overload a cast to double operation that returns the current value, so any 
		//  operation that requires a double can simply use a value and will be given the current value?

	private:
		unsigned int defLevel;				//Definition Level of Value
		bool minSet;						//Respect Minimum Value ?
		double minValue;					//Minimum Acceptable Value
		bool maxSet;						//Respect Maximum Value ?
		double maxValue;					//Maximum Acceptable Value
		double currentValue;				//Current Value
		double tolerance;					//Tolerance Level
};

//Initialize new Object to default "zero" state
Value::Value(){
	defLevel = 0;
	minSet = false;
	minValue = 0;
	maxSet = false;
	maxValue = 0;
	currentValue = 0;
}

//Initialize new Object to default "zero" state
Value::Value(){
	defLevel = 0;
	minSet = false;
	minValue = 0;
	maxSet = false;
	maxValue = 0;
	currentValue = 0;
}

//Initialize new Object to default "zero" state
Value::Value(){
	defLevel = 0;
	minSet = false;
	minValue = 0;
	maxSet = false;
	maxValue = 0;
	currentValue = 0;
}