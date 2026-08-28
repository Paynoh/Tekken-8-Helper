#pragma once
#include <cstdint>
namespace Tekken
{
    constexpr const wchar_t* ProcessName = L"Polaris-Win64-Shipping.exe";

    // mov rcx, cs:BasePtr ; test rcx,rcx ; jz blabla ; lea rdx,[rsp+38h] ; call ; cmp [rsp+38h],0 ; jz blabla2
    constexpr const char* BasePtrPattern = "\x48\x8B\x0D\x00\x00\x00\x00\x48\x85\xC9\x74\x00\x48\x8D\x54\x24\x40\xE8\x00\x00\x00\x00\x80\x7C\x24\x40\x00\x74\x00";
    constexpr const char* BasePtrMask = "xxx????xxxx?xxxxxx????xxxxxx?";

    constexpr uintptr_t WidgetPointerChain[] = { 0x60, 0x40, 0x08, 0x18, 0x40 };

    constexpr uintptr_t SelfFrameAdvantageOffset = 0x416C;
    constexpr uintptr_t SelfCharacterStatusOffset = 0x418C;
    constexpr uintptr_t SelfDistanceOffset = 0x4190;
    constexpr uintptr_t OpFrameAdvantageOffset = 0x4134;
    constexpr uintptr_t OpCharacterStatusOffset = 0x4154;
    constexpr uintptr_t OpDistanceOffset = 0x4158;

    
    constexpr int NoData = 1000; //when at 0 the frame value is set to 1000

    enum class CharacterStatus : int
    {
	    Invalid = -1, //Or anything else really
        Standing = 1,
        Crouching = 2,
        Downed = 3,
        Airborne = 4,
        Invincible = 5,
        PowerCrash = 6,
    };
}
