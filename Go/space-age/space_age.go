// Package space should calculate one's age on a given planet
package space

// Planet define a solar system planet
type Planet string

const earthYear = 31557600.0 // Earth year in seconds

var orbitalPeriod = map[Planet]float64{
	"Mercury": 0.2408467,
	"Venus":   0.61519726,
	"Earth":   1.0,
	"Mars":    1.8808158,
	"Jupiter": 11.862615,
	"Saturn":  29.447498,
	"Uranus":  84.016846,
	"Neptune": 164.79132,
}

// Age should calculate how old someone would be on a given planet
func Age(seconds float64, planet Planet) float64 {
	return seconds / earthYear / orbitalPeriod[planet]
}
