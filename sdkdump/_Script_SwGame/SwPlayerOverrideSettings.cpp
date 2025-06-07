#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\DeveloperSettings.hpp"
#include "SwPlayerOverrideSettings.hpp"
_Script_CoreUObject::Class* _Script_SwGame::SwPlayerOverrideSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwPlayerOverrideSettings");
    return result;
}
