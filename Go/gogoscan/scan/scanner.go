package scan

type Scanner struct {

}

func NewScanner() *Scanner {
	return &Scanner{}
}

func (s Scanner) Scan(hostname, port string) (*Result, error) {
	run, err := s.execNmap(hostname, port)
	if err != nil {
		return nil, err
	}

	if run.RunStats.Hosts.Up > 0 {
		port := run.Hosts[0].Ports[0]

		return &Result{
			Host: true,
			Port: port.State.State,
		}, nil
	} else {
		return &Result{
			Host: false,
			Port: "",
		}, nil
	}
}