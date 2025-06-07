#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "PointerToUberGraphFrame.hpp"
_Script_CoreUObject::Class* _Script_Engine::PointerToUberGraphFrame::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.PointerToUberGraphFrame");
    return result;
}
