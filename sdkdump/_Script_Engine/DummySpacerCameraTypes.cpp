#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "DummySpacerCameraTypes.hpp"
_Script_CoreUObject::Class* _Script_Engine::DummySpacerCameraTypes::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.DummySpacerCameraTypes");
    return result;
}
