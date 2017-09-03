/*
#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

enum Type {
	JSONStringType,
	JSONNumberType,
	JSONObjectType,
	JSONArrayType
};

class JSONType {
public:
	virtual Type getType() = 0;
};

class JSONString : public JSONType {
public:
	JSONString(string value) : m_value(value) {
	}
	Type getType() { return JSONStringType; }
	string getValue() { return m_value; }
private:
	string m_value;
};

class JSONNumber : public JSONType {
public:
	JSONNumber(int value) : m_value(value) {
	}
	Type getType() { return JSONNumberType; }
	int getValue() { return m_value; }
private:
	int m_value;
};

class JSONObject : public JSONType {
public:
	JSONObject(vector<pair<JSONString *,JSONType *> > keyValuePairs) :
	  m_keyValuePairs(keyValuePairs)
	{
	}
	vector<pair<JSONString *,JSONType *> > getKeyValuePairs() {return m_keyValuePairs;}
	Type getType() { return JSONObjectType; }
private:
	vector<pair<JSONString *,JSONType *> > m_keyValuePairs;
};

class JSONArray : public JSONType {
public:
	JSONArray(vector<JSONType*> values) : m_values(values)
	{
	}
	Type getType() { return JSONArrayType; }
	vector<JSONType *> getValues() { return m_values; }
private:
	vector<JSONType*> m_values;
};

class JSONUtils {
private:
	static void prettyPrintJSONHelper(JSONType *json, int tabs, stringstream &ss) {
		switch (json->getType()) {
		case JSONStringType:
		case JSONNumberType:
			printPrimitive(json,ss);
			break;
		case JSONObjectType:
			printJSONObject((JSONObject*)json, tabs, ss);
			break;
		case JSONArrayType:
			printJSONArray((JSONArray*)json, tabs, ss);
			break;
		}
	}

	static void printJSONArray(JSONArray *json, int tabs, stringstream &ss) {
		ss << "[" << endl;
		vector<JSONType*> keyValuePairs = json->getValues();
		for (int i=0; i<keyValuePairs.size(); ++i) {
			printTabs(tabs,ss);
			JSONType *value = keyValuePairs[i];
			if (value->getType() == JSONNumberType 
				|| value->getType() == JSONStringType) {
				printPrimitive(value,ss);
			} else {
				prettyPrintJSONHelper(value, tabs+1, ss);
			}
			if (i != keyValuePairs.size() -1) {
				ss << ",";
			}
			ss << endl;
		}
		printTabs(tabs-1,ss);
		ss << "]";
	}

	static void printJSONObject(JSONObject *json, int tabs, stringstream &ss) {
		ss << "{" << endl;
		vector<pair<JSONString*,JSONType*> > keyValuePairs = json->getKeyValuePairs();
		for (int i=0; i<keyValuePairs.size(); ++i) {
			printTabs(tabs,ss);
			JSONString *key = keyValuePairs[i].first;
			JSONType *value = keyValuePairs[i].second;
			printPrimitive(key, ss);
			ss << ": ";
			if (value->getType() == JSONNumberType 
				|| value->getType() == JSONStringType) {
				printPrimitive(value,ss);
			} else {
				prettyPrintJSONHelper(value, tabs+1, ss);
			}
			if (i != keyValuePairs.size() -1) {
				ss << ",";
			}
			ss << endl;
		}
		printTabs(tabs-1,ss);
		ss << "}";
	}

	static void printPrimitive(JSONType *json, stringstream &ss) {
		if (json->getType() == Type::JSONNumberType) {
			ss << "\"" << ((JSONNumber*)json)->getValue() << "\"";
		}
		if (json->getType() == Type::JSONStringType) {
			ss << "\"" << ((JSONString*)json)->getValue() << "\"";
		}
	}

	static void printTabs(int tabs, stringstream &ss) {
		for (int i=0; i<tabs; ++i) {
			ss << "    ";
		}
	}
public:
	static void prettyPrintJSON(JSONType *json) {
		stringstream ss;
		prettyPrintJSONHelper(json, 1, ss);
		cout << ss.str() << endl;
	}
};

int main() {
	vector<pair<JSONString*,JSONType*> > objectPairs;
	JSONString *firstName = new JSONString("fistName");
	JSONString *John = new JSONString("John");
	JSONString *lastName = new JSONString("lastName");
	JSONString *smith = new JSONString("Smith");
	objectPairs.push_back(make_pair(firstName,John));
	objectPairs.push_back(make_pair(lastName,smith));

	JSONString *address = new JSONString("address");
	vector<pair<JSONString*,JSONType*> > addressPairs;
	JSONString *streetAddress = new JSONString("streetAddress");
	JSONString *streetAddressValue = new JSONString("21 2nd Street");
	
	JSONString *city = new JSONString("city");
	JSONString *cityValue = new JSONString("New York");
	
	JSONString *state = new JSONString("state");
	JSONString *NY = new JSONString("NY");
	JSONString *postalCode = new JSONString("postalCode");
	JSONString *code = new JSONString("10021");

	addressPairs.push_back(make_pair(streetAddress, streetAddressValue));
	addressPairs.push_back(make_pair(city,cityValue));
	addressPairs.push_back(make_pair(state,NY));
	addressPairs.push_back(make_pair(postalCode,code));

	JSONObject *addressObject = new JSONObject(addressPairs);
	objectPairs.push_back(make_pair(address,addressObject));

	vector<JSONType*> arrayTypes;
	
	vector<pair<JSONString*,JSONType*> > arrayObj1;
	JSONString *type = new JSONString("type");
	JSONString *home = new JSONString("home");
	JSONString *number = new JSONString("number");
	JSONString *numberValue = new JSONString("212 555-1234");
	arrayObj1.push_back(make_pair(type,home));
	arrayObj1.push_back(make_pair(number,numberValue));
	JSONObject *arrayJObj1 = new JSONObject(arrayObj1);

	vector<pair<JSONString*,JSONType*> > arrayObj2;
	JSONString *type2 = new JSONString("type");
	JSONString *fax = new JSONString("fax");
	JSONString *number2 = new JSONString("number");
	JSONString *numberValue2 = new JSONString("646 555-4567");
	arrayObj2.push_back(make_pair(type2,fax));
	arrayObj2.push_back(make_pair(number2,numberValue2));
	JSONObject *arrayJObj2 = new JSONObject(arrayObj2);

	arrayTypes.push_back(arrayJObj1);
	arrayTypes.push_back(arrayJObj2);

	JSONArray *jArray = new JSONArray(arrayTypes);

	JSONString *phoneNumber = new JSONString("phoneNumber");
	objectPairs.push_back(make_pair(phoneNumber,jArray));
	JSONObject *root = new JSONObject(objectPairs);
	JSONUtils::prettyPrintJSON(root);
	
}*/