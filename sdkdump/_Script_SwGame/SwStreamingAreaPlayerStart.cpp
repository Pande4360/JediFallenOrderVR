#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\RsStreamingAreaPlayerStart.hpp"
#include "SwPlayerLoadoutOverrideData.hpp"
#include "SwStreamingAreaPlayerStart.hpp"
_Script_SwGame::SwPlayerLoadoutOverrideData*& _Script_SwGame::SwStreamingAreaPlayerStart::get_LoadoutData() {
    return *(_Script_SwGame::SwPlayerLoadoutOverrideData**)((uintptr_t)this + 0x3d0);
}
_Script_CoreUObject::Class* _Script_SwGame::SwStreamingAreaPlayerStart::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwStreamingAreaPlayerStart");
    return result;
}
