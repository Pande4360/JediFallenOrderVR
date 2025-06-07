#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "Default__UserDefinedStruct.hpp"
_Script_CoreUObject::Class* _Script_Engine::Default__UserDefinedStruct::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"UserDefinedStruct /Script/Engine.Default__UserDefinedStruct");
    return result;
}
