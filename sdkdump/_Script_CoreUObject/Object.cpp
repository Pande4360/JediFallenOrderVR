#include "..\FName.hpp"
#include "..\FUObjectArray.hpp"
#include "Class.hpp"
#include "Function.hpp"
#include "Object.hpp"
_Script_CoreUObject::Class* _Script_CoreUObject::Object::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/CoreUObject.Object");
    return result;
}
void _Script_CoreUObject::Object::ExecuteUbergraph(int32_t EntryPoint) {
    return;
}
std::wstring _Script_CoreUObject::Object::get_full_name() {
    if (ClassPrivate == nullptr) { return L"null"; }
    auto obj_name = Name.ToString();
    for (auto outer = OuterPrivate; outer != nullptr && outer != this; outer = outer->OuterPrivate) {
        obj_name = outer->Name.ToString() + L'.' + obj_name;
    }
    return ClassPrivate->Name.ToString() + L' ' + obj_name;
}
