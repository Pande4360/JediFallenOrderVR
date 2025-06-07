#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RandomShuffler.hpp"
_Script_CoreUObject::Class* _Script_SwGame::RandomShuffler::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SwGame.RandomShuffler");
    return result;
}
