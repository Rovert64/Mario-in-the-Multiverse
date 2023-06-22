#ifndef MARIO_ANIMATION_IDS_H
#define MARIO_ANIMATION_IDS_H

/* Mario Animation IDs */

enum MarioAnimID {
    /* 0x00 */ MARIO_ANIM_SLOW_LEDGE_GRAB,
    /* 0x01 */ MARIO_ANIM_FALL_OVER_BACKWARDS,
    /* 0x02 */ MARIO_ANIM_BACKWARD_AIR_KB,
    /* 0x03 */ MARIO_ANIM_DYING_ON_BACK,
    /* 0x04 */ MARIO_ANIM_BACKFLIP,
    /* 0x05 */ MARIO_ANIM_CLIMB_UP_POLE,
    /* 0x06 */ MARIO_ANIM_GRAB_POLE_SHORT,
    /* 0x07 */ MARIO_ANIM_GRAB_POLE_SWING_PART1,
    /* 0x08 */ MARIO_ANIM_GRAB_POLE_SWING_PART2,
    /* 0x09 */ MARIO_ANIM_HANDSTAND_IDLE,
    /* 0x0A */ MARIO_ANIM_HANDSTAND_JUMP,
    /* 0x0B */ MARIO_ANIM_START_HANDSTAND,
    /* 0x0C */ MARIO_ANIM_RETURN_FROM_HANDSTAND,
    /* 0x0D */ MARIO_ANIM_IDLE_ON_POLE,
    /* 0x0E */ MARIO_ANIM_A_POSE,
    /* 0x0F */ MARIO_ANIM_SKID_ON_GROUND,
    /* 0x10 */ MARIO_ANIM_STOP_SKID,
    /* 0x11 */ MARIO_ANIM_CROUCH_FROM_FAST_LONGJUMP,
    /* 0x12 */ MARIO_ANIM_CROUCH_FROM_SLOW_LONGJUMP,
    /* 0x13 */ MARIO_ANIM_FAST_LONGJUMP,
    /* 0x14 */ MARIO_ANIM_SLOW_LONGJUMP,
    /* 0x15 */ MARIO_ANIM_AIRBORNE_ON_STOMACH,
    /* 0x16 */ MARIO_ANIM_WALK_WITH_LIGHT_OBJ,
    /* 0x17 */ MARIO_ANIM_RUN_WITH_LIGHT_OBJ,
    /* 0x18 */ MARIO_ANIM_SLOW_WALK_WITH_LIGHT_OBJ,
    /* 0x19 */ MARIO_ANIM_SHIVERING_WARMING_HAND,
    /* 0x1A */ MARIO_ANIM_SHIVERING_RETURN_TO_IDLE,
    /* 0x1B */ MARIO_ANIM_SHIVERING,
    /* 0x1C */ MARIO_ANIM_CLIMB_DOWN_LEDGE,
    /* 0x1D */ MARIO_ANIM_CREDITS_WAVING,
    /* 0x1E */ MARIO_ANIM_CREDITS_LOOK_UP,
    /* 0x1F */ MARIO_ANIM_CREDITS_RETURN_FROM_LOOK_UP,
    /* 0x20 */ MARIO_ANIM_CREDITS_RAISE_HAND,
    /* 0x21 */ MARIO_ANIM_CREDITS_LOWER_HAND,
    /* 0x22 */ MARIO_ANIM_CREDITS_TAKE_OFF_CAP,
    /* 0x23 */ MARIO_ANIM_CREDITS_START_WALK_LOOK_UP,
    /* 0x24 */ MARIO_ANIM_CREDITS_LOOK_BACK_THEN_RUN,
    /* 0x25 */ MARIO_ANIM_FINAL_BOWSER_RAISE_HAND_SPIN,
    /* 0x26 */ MARIO_ANIM_FINAL_BOWSER_WING_CAP_TAKE_OFF,
    /* 0x27 */ MARIO_ANIM_CREDITS_PEACE_SIGN,
    /* 0x28 */ MARIO_ANIM_STAND_UP_FROM_LAVA_BOOST,
    /* 0x29 */ MARIO_ANIM_FIRE_LAVA_BURN,
    /* 0x2A */ MARIO_ANIM_WING_CAP_FLY,
    /* 0x2B */ MARIO_ANIM_HANG_ON_OWL,
    /* 0x2C */ MARIO_ANIM_LAND_ON_STOMACH,
    /* 0x2D */ MARIO_ANIM_AIR_FORWARD_KB,
    /* 0x2E */ MARIO_ANIM_DYING_ON_STOMACH,
    /* 0x2F */ MARIO_ANIM_SUFFOCATING,
    /* 0x30 */ MARIO_ANIM_COUGHING,
    /* 0x31 */ MARIO_ANIM_THROW_CATCH_KEY,
    /* 0x32 */ MARIO_ANIM_DYING_FALL_OVER,
    /* 0x33 */ MARIO_ANIM_IDLE_ON_LEDGE,
    /* 0x34 */ MARIO_ANIM_FAST_LEDGE_GRAB,
    /* 0x35 */ MARIO_ANIM_HANG_ON_CEILING,
    /* 0x36 */ MARIO_ANIM_PUT_CAP_ON,
    /* 0x37 */ MARIO_ANIM_TAKE_CAP_OFF_THEN_ON,
    /* 0x38 */ MARIO_ANIM_QUICKLY_PUT_CAP_ON, // unused
    /* 0x39 */ MARIO_ANIM_HEAD_STUCK_IN_GROUND,
    /* 0x3A */ MARIO_ANIM_GROUND_POUND_LANDING,
    /* 0x3B */ MARIO_ANIM_TRIPLE_JUMP_GROUND_POUND,
    /* 0x3C */ MARIO_ANIM_START_GROUND_POUND,
    /* 0x3D */ MARIO_ANIM_GROUND_POUND,
    /* 0x3E */ MARIO_ANIM_BOTTOM_STUCK_IN_GROUND,
    /* 0x3F */ MARIO_ANIM_IDLE_WITH_LIGHT_OBJ,
    /* 0x40 */ MARIO_ANIM_JUMP_LAND_WITH_LIGHT_OBJ,
    /* 0x41 */ MARIO_ANIM_JUMP_WITH_LIGHT_OBJ,
    /* 0x42 */ MARIO_ANIM_FALL_LAND_WITH_LIGHT_OBJ,
    /* 0x43 */ MARIO_ANIM_FALL_WITH_LIGHT_OBJ,
    /* 0x44 */ MARIO_ANIM_FALL_FROM_SLIDING_WITH_LIGHT_OBJ,
    /* 0x45 */ MARIO_ANIM_SLIDING_ON_BOTTOM_WITH_LIGHT_OBJ,
    /* 0x46 */ MARIO_ANIM_STAND_UP_FROM_SLIDING_WITH_LIGHT_OBJ,
    /* 0x47 */ MARIO_ANIM_RIDING_SHELL,
    /* 0x48 */ MARIO_ANIM_WALKING,
    /* 0x49 */ MARIO_ANIM_FORWARD_FLIP, // unused
    /* 0x4A */ MARIO_ANIM_JUMP_RIDING_SHELL,
    /* 0x4B */ MARIO_ANIM_LAND_FROM_DOUBLE_JUMP,
    /* 0x4C */ MARIO_ANIM_DOUBLE_JUMP_FALL,
    /* 0x4D */ MARIO_ANIM_SINGLE_JUMP,
    /* 0x4E */ MARIO_ANIM_LAND_FROM_SINGLE_JUMP,
    /* 0x4F */ MARIO_ANIM_AIR_KICK,
    /* 0x50 */ MARIO_ANIM_DOUBLE_JUMP_RISE,
    /* 0x51 */ MARIO_ANIM_START_FORWARD_SPINNING, // unused
    /* 0x52 */ MARIO_ANIM_THROW_LIGHT_OBJECT,
    /* 0x53 */ MARIO_ANIM_FALL_FROM_SLIDE_KICK,
    /* 0x54 */ MARIO_ANIM_BEND_KNESS_RIDING_SHELL, // unused
    /* 0x55 */ MARIO_ANIM_LEGS_STUCK_IN_GROUND,
    /* 0x56 */ MARIO_ANIM_GENERAL_FALL,
    /* 0x57 */ MARIO_ANIM_GENERAL_LAND,
    /* 0x58 */ MARIO_ANIM_BEING_GRABBED,
    /* 0x59 */ MARIO_ANIM_GRAB_HEAVY_OBJECT,
    /* 0x5A */ MARIO_ANIM_SLOW_LAND_FROM_DIVE,
    /* 0x5B */ MARIO_ANIM_FLY_FROM_CANNON,
    /* 0x5C */ MARIO_ANIM_MOVE_ON_WIRE_NET_RIGHT,
    /* 0x5D */ MARIO_ANIM_MOVE_ON_WIRE_NET_LEFT,
    /* 0x5E */ MARIO_ANIM_MISSING_CAP,
    /* 0x5F */ MARIO_ANIM_PULL_DOOR_WALK_IN,
    /* 0x60 */ MARIO_ANIM_PUSH_DOOR_WALK_IN,
    /* 0x61 */ MARIO_ANIM_UNLOCK_DOOR,
    /* 0x62 */ MARIO_ANIM_START_REACH_POCKET, // unused, reaching keys maybe?
    /* 0x63 */ MARIO_ANIM_REACH_POCKET, // unused
    /* 0x64 */ MARIO_ANIM_STOP_REACH_POCKET, // unused
    /* 0x65 */ MARIO_ANIM_GROUND_THROW,
    /* 0x66 */ MARIO_ANIM_GROUND_KICK,
    /* 0x67 */ MARIO_ANIM_FIRST_PUNCH,
    /* 0x68 */ MARIO_ANIM_SECOND_PUNCH,
    /* 0x69 */ MARIO_ANIM_FIRST_PUNCH_FAST,
    /* 0x6A */ MARIO_ANIM_SECOND_PUNCH_FAST,
    /* 0x6B */ MARIO_ANIM_PICK_UP_LIGHT_OBJ,
    /* 0x6C */ MARIO_ANIM_PUSHING,
    /* 0x6D */ MARIO_ANIM_START_RIDING_SHELL,
    /* 0x6E */ MARIO_ANIM_PLACE_LIGHT_OBJ,
    /* 0x6F */ MARIO_ANIM_FORWARD_SPINNING,
    /* 0x70 */ MARIO_ANIM_BACKWARD_SPINNING,
    /* 0x71 */ MARIO_ANIM_BREAKDANCE,
    /* 0x72 */ MARIO_ANIM_RUNNING,
    /* 0x73 */ MARIO_ANIM_RUNNING_UNUSED, // unused duplicate, originally part 2?
    /* 0x74 */ MARIO_ANIM_SOFT_BACK_KB,
    /* 0x75 */ MARIO_ANIM_SOFT_FRONT_KB,
    /* 0x76 */ MARIO_ANIM_DYING_IN_QUICKSAND,
    /* 0x77 */ MARIO_ANIM_IDLE_IN_QUICKSAND,
    /* 0x78 */ MARIO_ANIM_MOVE_IN_QUICKSAND,
    /* 0x79 */ MARIO_ANIM_ELECTROCUTION,
    /* 0x7A */ MARIO_ANIM_SHOCKED,
    /* 0x7B */ MARIO_ANIM_BACKWARD_KB,
    /* 0x7C */ MARIO_ANIM_FORWARD_KB,
    /* 0x7D */ MARIO_ANIM_IDLE_HEAVY_OBJ,
    /* 0x7E */ MARIO_ANIM_STAND_AGAINST_WALL,
    /* 0x7F */ MARIO_ANIM_SIDESTEP_LEFT,
    /* 0x80 */ MARIO_ANIM_SIDESTEP_RIGHT,
    /* 0x81 */ MARIO_ANIM_START_SLEEP_IDLE,
    /* 0x82 */ MARIO_ANIM_START_SLEEP_SCRATCH,
    /* 0x83 */ MARIO_ANIM_START_SLEEP_YAWN,
    /* 0x84 */ MARIO_ANIM_START_SLEEP_SITTING,
    /* 0x85 */ MARIO_ANIM_SLEEP_IDLE,
    /* 0x86 */ MARIO_ANIM_SLEEP_START_LYING,
    /* 0x87 */ MARIO_ANIM_SLEEP_LYING,
    /* 0x88 */ MARIO_ANIM_DIVE,
    /* 0x89 */ MARIO_ANIM_SLIDE_DIVE,
    /* 0x8A */ MARIO_ANIM_GROUND_BONK,
    /* 0x8B */ MARIO_ANIM_STOP_SLIDE_LIGHT_OBJ,
    /* 0x8C */ MARIO_ANIM_SLIDE_KICK,
    /* 0x8D */ MARIO_ANIM_CROUCH_FROM_SLIDE_KICK,
    /* 0x8E */ MARIO_ANIM_SLIDE_MOTIONLESS, // unused
    /* 0x8F */ MARIO_ANIM_STOP_SLIDE,
    /* 0x90 */ MARIO_ANIM_FALL_FROM_SLIDE,
    /* 0x91 */ MARIO_ANIM_SLIDE,
    /* 0x92 */ MARIO_ANIM_TIPTOE,
    /* 0x93 */ MARIO_ANIM_TWIRL_LAND,
    /* 0x94 */ MARIO_ANIM_TWIRL,
    /* 0x95 */ MARIO_ANIM_START_TWIRL,
    /* 0x96 */ MARIO_ANIM_STOP_CROUCHING,
    /* 0x97 */ MARIO_ANIM_START_CROUCHING,
    /* 0x98 */ MARIO_ANIM_CROUCHING,
    /* 0x99 */ MARIO_ANIM_CRAWLING,
    /* 0x9A */ MARIO_ANIM_STOP_CRAWLING,
    /* 0x9B */ MARIO_ANIM_START_CRAWLING,
    /* 0x9C */ MARIO_ANIM_SUMMON_STAR,
    /* 0x9D */ MARIO_ANIM_RETURN_STAR_APPROACH_DOOR,
    /* 0x9E */ MARIO_ANIM_BACKWARDS_WATER_KB,
    /* 0x9F */ MARIO_ANIM_SWIM_WITH_OBJ_PART1,
    /* 0xA0 */ MARIO_ANIM_SWIM_WITH_OBJ_PART2,
    /* 0xA1 */ MARIO_ANIM_FLUTTERKICK_WITH_OBJ,
    /* 0xA2 */ MARIO_ANIM_WATER_ACTION_END_WITH_OBJ, // either swimming or flutterkicking
    /* 0xA3 */ MARIO_ANIM_STOP_GRAB_OBJ_WATER,
    /* 0xA4 */ MARIO_ANIM_WATER_IDLE_WITH_OBJ,
    /* 0xA5 */ MARIO_ANIM_DROWNING_PART1,
    /* 0xA6 */ MARIO_ANIM_DROWNING_PART2,
    /* 0xA7 */ MARIO_ANIM_WATER_DYING,
    /* 0xA8 */ MARIO_ANIM_WATER_FORWARD_KB,
    /* 0xA9 */ MARIO_ANIM_FALL_FROM_WATER,
    /* 0xAA */ MARIO_ANIM_SWIM_PART1,
    /* 0xAB */ MARIO_ANIM_SWIM_PART2,
    /* 0xAC */ MARIO_ANIM_FLUTTERKICK,
    /* 0xAD */ MARIO_ANIM_WATER_ACTION_END, // either swimming or flutterkicking
    /* 0xAE */ MARIO_ANIM_WATER_PICK_UP_OBJ,
    /* 0xAF */ MARIO_ANIM_WATER_GRAB_OBJ_PART2,
    /* 0xB0 */ MARIO_ANIM_WATER_GRAB_OBJ_PART1,
    /* 0xB1 */ MARIO_ANIM_WATER_THROW_OBJ,
    /* 0xB2 */ MARIO_ANIM_WATER_IDLE,
    /* 0xB3 */ MARIO_ANIM_WATER_STAR_DANCE,
    /* 0xB4 */ MARIO_ANIM_RETURN_FROM_WATER_STAR_DANCE,
    /* 0xB5 */ MARIO_ANIM_GRAB_BOWSER,
    /* 0xB6 */ MARIO_ANIM_SWINGING_BOWSER,
    /* 0xB7 */ MARIO_ANIM_RELEASE_BOWSER,
    /* 0xB8 */ MARIO_ANIM_HOLDING_BOWSER,
    /* 0xB9 */ MARIO_ANIM_HEAVY_THROW,
    /* 0xBA */ MARIO_ANIM_WALK_PANTING,
    /* 0xBB */ MARIO_ANIM_WALK_WITH_HEAVY_OBJ,
    /* 0xBC */ MARIO_ANIM_TURNING_PART1,
    /* 0xBD */ MARIO_ANIM_TURNING_PART2,
    /* 0xBE */ MARIO_ANIM_SLIDEFLIP_LAND,
    /* 0xBF */ MARIO_ANIM_SLIDEFLIP,
    /* 0xC0 */ MARIO_ANIM_TRIPLE_JUMP_LAND,
    /* 0xC1 */ MARIO_ANIM_TRIPLE_JUMP,
    /* 0xC2 */ MARIO_ANIM_FIRST_PERSON,
    /* 0xC3 */ MARIO_ANIM_IDLE_HEAD_LEFT,
    /* 0xC4 */ MARIO_ANIM_IDLE_HEAD_RIGHT,
    /* 0xC5 */ MARIO_ANIM_IDLE_HEAD_CENTER,
    /* 0xC6 */ MARIO_ANIM_HANDSTAND_LEFT,
    /* 0xC7 */ MARIO_ANIM_HANDSTAND_RIGHT,
    /* 0xC8 */ MARIO_ANIM_WAKE_FROM_SLEEP,
    /* 0xC9 */ MARIO_ANIM_WAKE_FROM_LYING,
    /* 0xCA */ MARIO_ANIM_START_TIPTOE,
    /* 0xCB */ MARIO_ANIM_SLIDEJUMP, // pole jump and wall kick
    /* 0xCC */ MARIO_ANIM_START_WALLKICK,
    /* 0xCD */ MARIO_ANIM_STAR_DANCE,
    /* 0xCE */ MARIO_ANIM_RETURN_FROM_STAR_DANCE,
    /* 0xCF */ MARIO_ANIM_FORWARD_SPINNING_FLIP,
    /* 0xD0 */ MARIO_ANIM_TRIPLE_JUMP_FLY,
    MARIO_ANIM_CUTTER_1,
    MARIO_ANIM_CUTTER_1_END,
    MARIO_ANIM_CUTTER_2,
    MARIO_ANIM_CUTTER_2_END,
    MARIO_ANIM_CUTTER_3,
    MARIO_ANIM_SQUID,
};

#endif // MARIO_ANIMATION_IDS_H
