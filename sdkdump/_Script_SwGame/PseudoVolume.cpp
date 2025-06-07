#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "PseudoVolume.hpp"
_Script_CoreUObject::Class* _Script_SwGame::PseudoVolume::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.PseudoVolume");
    return result;
}
