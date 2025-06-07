#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Volume.hpp"
#include "SWCompVolume.hpp"
_Script_CoreUObject::Class* _Script_SwGame::SWCompVolume::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SWCompVolume");
    return result;
}
