#pragma once
class Instrument
{
public:
	Instrument(void);
	~Instrument(void);

public:
	virtual int init() = 0;
	virtual int playNote(int note) = 0;
	virtual int switchOctave(int octave) = 0;

private:
	int octave, breaker;
};

