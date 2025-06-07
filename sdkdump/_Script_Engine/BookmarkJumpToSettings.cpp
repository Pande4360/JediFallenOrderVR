#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "BookmarkBaseJumpToSettings.hpp"
#include "BookmarkJumpToSettings.hpp"
_Script_CoreUObject::Class* _Script_Engine::BookmarkJumpToSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.BookmarkJumpToSettings");
    return result;
}
