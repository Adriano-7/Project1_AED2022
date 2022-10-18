#include "UcClass.h"

UcClass::UcClass() {

}

UcClass::UcClass(string ucId, string classId) {
    this->ucId = ucId;
    this->classId = classId;
}

string UcClass::getUcId() const {
    return ucId;
}

string UcClass::getClassId() const {
    return classId;
}

bool UcClass::operator ==(const UcClass &other) const {
    return ucId == other.ucId && classId == other.classId;
}