#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "Bookmark2DJumpToSettings.hpp"
_Script_CoreUObject::Class* _Script_Engine::Bookmark2DJumpToSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.Bookmark2DJumpToSettings");
    return result;
}
